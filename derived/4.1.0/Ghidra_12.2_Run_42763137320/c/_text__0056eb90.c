/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056eb90; name: FUN_.text__0056eb90
 */


undefined8
FUN__text__0056eb90(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined4 *param_5)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  bVar2 = *(byte *)(param_5 + 1);
  uVar4 = (uint)bVar2;
  *(uint *)(param_1 + 0x70) = (uint)bVar2;
  uVar1 = *param_5;
  *(long *)(param_1 + 0x68) = param_4;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if ((*(char *)((long)param_5 + 5) < '\0') && (*(char *)(param_4 + 0x48) == '\0')) {
    uVar4 = bVar2 - 1;
    *(uint *)(param_1 + 0x70) = uVar4;
    if (uVar4 == 0) goto LAB__text__0056ec44;
  }
  else if (bVar2 == 0) goto LAB__text__0056ec44;
  iVar3 = FUN__text__0055d3a4(param_1 + 8,param_2,uVar4,0);
  if (((iVar3 != 1) ||
      (iVar3 = FUN__text__0055d3a4(param_1 + 0x28,param_2,*(undefined4 *)(param_1 + 0x70),0),
      iVar3 != 1)) ||
     (iVar3 = FUN__text__0055d3a4(param_1 + 0x48,param_2,*(undefined4 *)(param_1 + 0x70),0),
     iVar3 != 1)) {
    return 0x34;
  }
  param_4 = *(long *)(param_1 + 0x68);
LAB__text__0056ec44:
  *(undefined1 *)(param_4 + 0x4c) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x4d) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x4e) = 1;
  fVar5 = exp2f(*(float *)(*(long *)(param_1 + 0x68) + 0x44) * 0.1660964);
  *(float *)(param_1 + 0x80) = fVar5;
  return 1;
}


