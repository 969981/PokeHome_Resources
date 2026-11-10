/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004365fc; name: FUN_.text__004365fc
 */


void FUN__text__004365fc(long param_1,float *param_2,float *param_3,long *param_4,char *param_5,
                        undefined1 *param_6)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_68;
  undefined1 local_64;
  long local_60;
  float local_58;
  undefined4 uStack_54;
  
  lVar4 = param_4[3];
  lVar1 = *param_4;
  lVar2 = param_4[1];
  uVar6 = FUN__text__00436734();
  if ((uVar6 & 1) != 0) {
    return;
  }
  if ((int)lVar4 == 2) {
    fVar8 = *param_3 + *param_2;
    *(float *)(param_1 + 0x20) = fVar8;
    if (fVar8 == *param_2) goto LAB__text__004366d8;
  }
  else {
    fVar8 = *param_3;
    *(float *)(param_1 + 0x20) = fVar8;
    if (fVar8 == *param_2) goto LAB__text__004366d8;
  }
  *param_6 = 1;
  uVar7 = *(undefined8 *)(lVar1 + 8);
  local_58 = *param_2;
  local_68 = (undefined4)uVar7;
  *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + '\x01';
  local_64 = (undefined1)((ulong)uVar7 >> 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x20);
  *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + '\x04';
  local_60 = lVar2;
  FUN__text__00438120(param_1 + 8,&local_68);
  *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -4;
  fVar8 = *(float *)(param_1 + 0x20);
LAB__text__004366d8:
  *param_3 = fVar8;
  bVar3 = *(byte *)(param_1 + 0x18);
  if (*param_5 == '\0') {
    bVar5 = (bVar3 & 0xfe) == 2;
  }
  else if (bVar3 < 4) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    *(byte *)(param_1 + 0x18) = bVar3 | 2;
  }
  *param_5 = bVar5;
  return;
}


