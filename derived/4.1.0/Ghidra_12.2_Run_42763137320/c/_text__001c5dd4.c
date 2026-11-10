/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c5dd4; name: FUN_.text__001c5dd4
 */


void FUN__text__001c5dd4(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)(param_1 + 8) + 0x110;
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x370);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x108) = 0;
    *(undefined1 *)(lVar6 + 0x110) = 0;
  }
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x3e0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x108) = 0;
    *(undefined1 *)(lVar6 + 0x110) = 0;
  }
  lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x450);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x108) = 0;
    *(undefined1 *)(lVar7 + 0x110) = 0;
  }
  lVar7 = *(long *)(param_1 + 8) + 0x110;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar8 = FUN__text__0012cb14(lVar7,param_1 + 0x1a0);
  lVar9 = FUN__text__0012cb14(lVar7,param_1 + 0x210);
  lVar10 = FUN__text__0012cb14(lVar7,param_1 + 0x288);
  lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x2f8);
  bVar5 = (param_2 & 1) == 0;
  uVar1 = 0x800000000;
  if (bVar5) {
    uVar1 = 0;
  }
  uVar2 = 0x400000000;
  if (bVar5) {
    uVar2 = 0;
  }
  uVar3 = 0;
  if (bVar5) {
    uVar3 = 0x100000000000000;
  }
  uVar4 = 0;
  if (bVar5) {
    uVar4 = 0x400000000;
  }
  FUN__text__003c7c60(lVar6,param_1 + 0x198,param_2 & 1);
  FUN__text__003c7c60(lVar6,param_1 + 0x280,(param_2 ^ 0xffffffff) & 1);
  *(undefined8 *)(lVar8 + 0x108) = uVar1;
  *(undefined1 *)(lVar8 + 0x110) = 0;
  *(undefined8 *)(lVar9 + 0x108) = uVar2;
  *(undefined1 *)(lVar9 + 0x110) = 0;
  *(undefined8 *)(lVar10 + 0x108) = uVar3;
  *(undefined1 *)(lVar10 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = uVar4;
  *(undefined1 *)(lVar7 + 0x110) = 0;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001c5f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


