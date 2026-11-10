/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d91d8; name: FUN_.text__001d91d8
 */


void FUN__text__001d91d8(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8) + 0x110;
  uVar1 = FUN__text__0012cb14(lVar4,param_1 + 0x208);
  uVar2 = FUN__text__0012cb14(lVar4,param_1 + 0x278);
  FUN__text__003a14e8(uVar1,(param_2 ^ 0xffffffff) & 1);
  FUN__text__003a14e8(uVar2,param_2);
  lVar4 = *(long *)(param_1 + 8) + 0x110;
  lVar3 = FUN__text__0012cb14(lVar4,param_1 + 0x208);
  lVar4 = FUN__text__0012cb14(lVar4,param_1 + 0x278);
  if (*(int *)(param_1 + 0x6d8) == 2) {
    return;
  }
  if (*(int *)(param_1 + 0x6d8) == 1) {
    *(undefined8 *)(lVar3 + 0x108) = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x84) == '\0') {
      *(undefined8 *)(lVar3 + 0x108) = 0;
      *(undefined1 *)(lVar3 + 0x110) = 0;
      *(undefined8 *)(lVar4 + 0x108) = 0x800000000;
      goto LAB__text__001d9298;
    }
    *(undefined8 *)(lVar3 + 0x108) = 0x800000000;
  }
  *(undefined1 *)(lVar3 + 0x110) = 0;
  *(undefined8 *)(lVar4 + 0x108) = 0;
LAB__text__001d9298:
  *(undefined1 *)(lVar4 + 0x110) = 0;
  return;
}


