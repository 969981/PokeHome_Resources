/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c340c; name: FUN_.text__001c340c
 */


void FUN__text__001c340c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN__text__0019f530(*(undefined8 *)(param_1 + 0x6f8));
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x698);
LAB__text__001c3444:
    FUN__text__001c5878(uVar3,0);
    FUN__text__001c6e54(*(undefined8 *)(param_1 + 0x6b8),1);
    uVar3 = *(undefined8 *)(param_1 + 0x6f8);
    uVar4 = 1;
  }
  else {
    uVar2 = FUN__text__0019f5b0(*(undefined8 *)(param_1 + 0x6f8));
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN__text__0019f5bc(*(undefined8 *)(param_1 + 0x6f8));
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN__text__0019f5c8(*(undefined8 *)(param_1 + 0x6f8));
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN__text__0019f580(*(undefined8 *)(param_1 + 0x6f8));
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN__text__0019f590(*(undefined8 *)(param_1 + 0x6f8));
            if ((uVar2 & 1) != 0) {
              FUN__text__001c5878(*(undefined8 *)(param_1 + 0x698),5);
              FUN__text__001c6e54(*(undefined8 *)(param_1 + 0x6b8),0);
              FUN__text__0019fde8(*(undefined8 *)(param_1 + 0x6f8),0);
              FUN__text__001a00cc(*(undefined8 *)(param_1 + 0x6f8),0,0);
              goto LAB__text__001c34c4;
            }
            uVar2 = FUN__text__0019f5a0(*(undefined8 *)(param_1 + 0x6f8));
            uVar3 = *(undefined8 *)(param_1 + 0x698);
            if ((uVar2 & 1) != 0) {
              FUN__text__001c5878(uVar3,6);
              FUN__text__001c6e54(*(undefined8 *)(param_1 + 0x6b8),0);
              FUN__text__001c6ea8(*(undefined8 *)(param_1 + 0x6b8),0);
              FUN__text__0019fde8(*(undefined8 *)(param_1 + 0x6f8),1);
              FUN__text__001a00cc(*(undefined8 *)(param_1 + 0x6f8),1,1);
              if (*(char *)(*(long *)(param_1 + 0x640) + 0x70c) != '\0') {
                *(undefined1 *)(*(long *)(param_1 + 0x640) + 0x70c) = 0;
                FUN__text__001c7b30(*(undefined8 *)(param_1 + 0x6d8));
              }
              goto LAB__text__001c34c4;
            }
            goto LAB__text__001c3444;
          }
          uVar3 = *(undefined8 *)(param_1 + 0x698);
          uVar4 = 4;
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x698);
          uVar4 = 3;
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x698);
        uVar4 = 2;
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x698);
      uVar4 = 1;
    }
    FUN__text__001c5878(uVar3,uVar4);
    FUN__text__001c6e54(*(undefined8 *)(param_1 + 0x6b8),0);
    uVar3 = *(undefined8 *)(param_1 + 0x6f8);
    uVar4 = 0;
  }
  FUN__text__0019fde8(uVar3,uVar4);
LAB__text__001c34c4:
  uVar1 = FUN__text__0019fe8c(*(undefined8 *)(param_1 + 0x6f8));
  FUN__text__001c6044(*(undefined8 *)(param_1 + 0x698),uVar1 & 1);
  return;
}


