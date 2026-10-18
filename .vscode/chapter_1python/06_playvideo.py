
import cv2

cap = cv2.videocapture('videoplayback')
while(cap.isopened()):o
    ret, freme = cap.read()

    frame = cv2.resize(frame, (1200,700))

    cv2.imshow("video", frame)

    if cv2.waitkey(10) & 0xff == ord('q'):
        break


    cap.release()
    cv2.destroyAllWindows()
