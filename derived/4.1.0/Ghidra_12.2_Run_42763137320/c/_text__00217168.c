/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00217168; name: FUN_.text__00217168
 */


undefined8 FUN__text__00217168(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = FUN__text__002155e0();
  uVar3 = 0;
  if ((param_3 < 0xe) && ((uVar2 & 1) != 0)) {
    uVar1 = FUN__text__002156ec(param_1);
    uVar3 = 0;
    if ((param_2 != (undefined8 *)0x0) && (param_4 < uVar1)) {
      uVar3 = 1;
      lVar4 = *(long *)(param_1 + 0x90) + (ulong)param_3 * 0x960 + (ulong)param_4 * 0x50;
      uVar5 = *(undefined8 *)(lVar4 + 0xc);
      *param_2 = *(undefined8 *)(lVar4 + 4);
      param_2[1] = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x14);
      uVar6 = *(undefined8 *)(lVar4 + 0x1c);
      uVar7 = *(undefined8 *)(lVar4 + 0x2c);
      param_2[4] = *(undefined8 *)(lVar4 + 0x24);
      param_2[5] = uVar7;
      param_2[2] = uVar5;
      param_2[3] = uVar6;
      uVar6 = *(undefined8 *)(lVar4 + 0x34);
      uVar7 = *(undefined8 *)(lVar4 + 0x3c);
      uVar5 = *(undefined8 *)(lVar4 + 0x4c);
      param_2[8] = *(undefined8 *)(lVar4 + 0x44);
      param_2[9] = uVar5;
      param_2[6] = uVar6;
      param_2[7] = uVar7;
    }
  }
  return uVar3;
}


