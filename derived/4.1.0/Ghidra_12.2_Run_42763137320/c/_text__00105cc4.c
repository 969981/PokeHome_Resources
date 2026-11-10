/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00105cc4; name: FUN_.text__00105cc4
 */


void FUN__text__00105cc4(long param_1)

{
  SystemEventType *pSVar1;
  ulong uVar2;
  
  pSVar1 = (SystemEventType *)(param_1 + 0x1080);
  uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
  if ((uVar2 & 1) != 0) {
    FUN__text__001058b4();
    uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
    if ((uVar2 & 1) != 0) {
      FUN__text__001058b4();
      uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
      if ((uVar2 & 1) != 0) {
        FUN__text__001058b4();
        uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar2 & 1) != 0) {
          FUN__text__001058b4();
          uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
          if ((uVar2 & 1) != 0) {
            FUN__text__001058b4();
            uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
            if ((uVar2 & 1) != 0) {
              FUN__text__001058b4();
              uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
              if ((uVar2 & 1) != 0) {
                FUN__text__001058b4();
                uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                if ((uVar2 & 1) != 0) {
                  FUN__text__001058b4();
                  uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                  if ((uVar2 & 1) != 0) {
                    FUN__text__001058b4();
                    uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                    if ((uVar2 & 1) != 0) {
                      FUN__text__001058b4();
                      uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                      if ((uVar2 & 1) != 0) {
                        FUN__text__001058b4();
                        uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                        if ((uVar2 & 1) != 0) {
                          FUN__text__001058b4();
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


