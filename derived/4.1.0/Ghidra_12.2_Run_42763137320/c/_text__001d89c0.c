/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d89c0; name: FUN_.text__001d89c0
 */


void FUN__text__001d89c0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x6d8) = param_2;
  uVar1 = FUN__text__0012cb14(*(long *)(param_1 + 8) + 0x110,param_1 + 0x48);
  if (*(int *)(param_1 + 0x6d8) == 2) {
    FUN__text__003a14c4(uVar1,1);
    lVar3 = *(long *)(param_1 + 8) + 0x110;
    lVar2 = FUN__text__0012cb14(lVar3,param_1 + 0xb8);
    lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x128);
    FUN__text__003a14e8(lVar2,1);
    *(undefined1 *)(lVar2 + 0x110) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0x200000000;
    FUN__text__003a14e8(lVar3,0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    FUN__text__001d8fdc(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x6d8) == 1) {
    FUN__text__003a14c4(uVar1,0);
    lVar3 = *(long *)(param_1 + 8) + 0x110;
    lVar2 = FUN__text__0012cb14(lVar3,param_1 + 0xb8);
    lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x128);
    FUN__text__003a14e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined1 *)(lVar2 + 0x110) = 0;
    FUN__text__003a14e8(lVar3,1);
    *(undefined1 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0x200000000;
    FUN__text__001d8c54(param_1,0);
    lVar3 = *(long *)(param_1 + 8) + 0x110;
    uVar1 = FUN__text__0012cb14(lVar3,param_1 + 0x3c8);
    uVar4 = FUN__text__0012cb14(lVar3,param_1 + 0x438);
    FUN__text__003a14c4(uVar1,1);
    FUN__text__003a14c4(uVar4,1);
    return;
  }
  FUN__text__003a14c4(uVar1,1);
  lVar3 = *(long *)(param_1 + 8) + 0x110;
  lVar2 = FUN__text__0012cb14(lVar3,param_1 + 0xb8);
  lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x128);
  FUN__text__003a14e8(lVar2,1);
  *(undefined1 *)(lVar2 + 0x110) = 0;
  *(undefined8 *)(lVar2 + 0x108) = 0x200000000;
  FUN__text__003a14e8(lVar3,0);
  *(undefined8 *)(lVar3 + 0x108) = 0;
  *(undefined1 *)(lVar3 + 0x110) = 0;
  FUN__text__001d8c54(param_1,1);
  uVar1 = FUN__text__0012cb14(*(long *)(param_1 + 8) + 0x110,param_1 + 0x198);
  FUN__text__003a14c4(uVar1,1);
  return;
}


