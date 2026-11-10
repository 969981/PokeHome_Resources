/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c8b5c; name: thunk_FUN_.text__001c8b60
 */


void thunk_FUN__text__001c8b60(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar4 + 0x2d0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    if (*(char *)(lVar1 + 0x38) != '\0') {
      if ((*(char *)(lVar1 + 0x39) == '\0') &&
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x30), 28.0 <= fVar6)) {
        *(undefined1 *)(lVar1 + 0x39) = 1;
      }
      if ((*(long *)(lVar4 + 0x2d0) == 0) ||
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x30), (uVar2 & 1) != 0)) {
        *(undefined1 *)(lVar1 + 0x38) = 0;
        *(undefined1 *)(lVar1 + 0x39) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x28,0);
      }
    }
    if (*(char *)(lVar1 + 0xb0) != '\0') {
      if ((*(char *)(lVar1 + 0xb1) == '\0') &&
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0xa8), 28.0 <= fVar6)) {
        *(undefined1 *)(lVar1 + 0xb1) = 1;
      }
      if ((*(long *)(lVar4 + 0x2d0) == 0) ||
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0xa8), (uVar2 & 1) != 0)) {
        *(undefined1 *)(lVar1 + 0xb0) = 0;
        *(undefined1 *)(lVar1 + 0xb1) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0xa0,0);
      }
    }
    if (*(char *)(lVar1 + 0x128) != '\0') {
      if ((*(char *)(lVar1 + 0x129) == '\0') &&
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x120), 28.0 <= fVar6)) {
        *(undefined1 *)(lVar1 + 0x129) = 1;
      }
      if ((*(long *)(lVar4 + 0x2d0) == 0) ||
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x120), (uVar2 & 1) != 0)) {
        *(undefined1 *)(lVar1 + 0x128) = 0;
        *(undefined1 *)(lVar1 + 0x129) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x118,0);
      }
    }
    if (*(char *)(lVar1 + 0x1a0) != '\0') {
      if ((*(char *)(lVar1 + 0x1a1) == '\0') &&
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x198), 28.0 <= fVar6)) {
        *(undefined1 *)(lVar1 + 0x1a1) = 1;
      }
      if ((*(long *)(lVar4 + 0x2d0) == 0) ||
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x198), (uVar2 & 1) != 0)) {
        *(undefined1 *)(lVar1 + 0x1a0) = 0;
        *(undefined1 *)(lVar1 + 0x1a1) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 400,0);
      }
    }
    if (*(char *)(lVar1 + 0x218) != '\0') {
      if ((*(char *)(lVar1 + 0x219) == '\0') &&
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x210), 28.0 <= fVar6)) {
        *(undefined1 *)(lVar1 + 0x219) = 1;
      }
      if ((*(long *)(lVar4 + 0x2d0) == 0) ||
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x210), (uVar2 & 1) != 0)) {
        *(undefined1 *)(lVar1 + 0x218) = 0;
        *(undefined1 *)(lVar1 + 0x219) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x208,0);
      }
    }
    if (*(char *)(lVar1 + 0x290) != '\0') {
      if ((*(char *)(lVar1 + 0x291) == '\0') &&
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x288), 28.0 <= fVar6)) {
        *(undefined1 *)(lVar1 + 0x291) = 1;
      }
      if ((*(long *)(lVar4 + 0x2d0) == 0) ||
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x288), (uVar2 & 1) != 0)) {
        *(undefined1 *)(lVar1 + 0x290) = 0;
        *(undefined1 *)(lVar1 + 0x291) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x280,0);
      }
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x78);
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001c8df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


