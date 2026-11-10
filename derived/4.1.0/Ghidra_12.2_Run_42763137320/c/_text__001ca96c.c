/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ca96c; name: FUN_.text__001ca96c
 */


void FUN__text__001ca96c(long param_1,uint param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  lVar4 = *(long *)(param_1 + 8) + 0x110;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = FUN__text__0012cb14(lVar4,param_1 + 0xd0);
  bVar2 = (param_2 & 1) == 0;
  uVar1 = 0x4000000000000;
  if (bVar2) {
    uVar1 = 0;
  }
  *(undefined1 *)(lVar3 + 0x110) = 1;
  *(undefined8 *)(lVar3 + 0x108) = uVar1;
  uVar1 = 0x8000000000000;
  if (bVar2) {
    uVar1 = 0;
  }
  FUN__text__003c7c60(lVar5,param_1 + 0xe0,param_2 & 1);
  lVar4 = FUN__text__0012cb14(lVar4,param_1 + 0x140);
  *(undefined8 *)(lVar4 + 0x108) = uVar1;
  *(undefined1 *)(lVar4 + 0x110) = 1;
  FUN__text__003c7c60(lVar5,param_1 + 0x150,param_2 & 1);
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001caa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


