/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047f810; name: FUN_.text__0047f810
 */


void FUN__text__0047f810(float param_1,undefined8 *param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_4 + 0x28) = *param_2;
  *(undefined8 *)(param_4 + 0x30) = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  *(undefined8 *)(param_4 + 0x48) = param_2[4];
  *(undefined8 *)(param_4 + 0x50) = uVar2;
  *(undefined8 *)(param_4 + 0x38) = uVar1;
  *(undefined8 *)(param_4 + 0x40) = uVar3;
  uVar4 = *(uint *)(param_4 + 0xc0);
  if ((*(uint *)(param_4 + 0xb8) & 0xf00) != 0x300) {
    uVar4 = *(uint *)(param_4 + 0xb8);
  }
  FUN__text__00484580(param_3,uVar4,*(undefined8 *)(param_4 + 0xf8));
  uVar4 = ((uVar4 & 0xff) + 3 & 0x1fc) * (param_3 & 0xff);
  uVar5 = (ulong)uVar4;
  if (uVar4 != 0) {
    pfVar6 = (float *)(*(long *)(param_4 + 0xf8) + 4);
    do {
      uVar5 = uVar5 - 2;
      pfVar6[-1] = pfVar6[-1] * param_1;
      *pfVar6 = *pfVar6 * param_1;
      pfVar6 = pfVar6 + 2;
    } while (uVar5 != 0);
  }
  return;
}


