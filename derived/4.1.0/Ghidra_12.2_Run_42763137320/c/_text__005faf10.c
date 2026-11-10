/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005faf10; name: FUN_.text__005faf10
 */


void FUN__text__005faf10(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  byte *pbVar9;
  long *plVar10;
  uint *__s;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  
  param_1[2] = 0x70f683;
  param_1[3] = 0;
  uVar11 = 0xcbf29ce484222645;
  *param_1 = param_2;
  param_1[1] = 0xcbf29ce484222645;
  param_1[4] = 0;
  if (param_2 == (int *)0x0) {
    FUN__text__005fa4a0(param_1 + 5);
    FUN__text__005fa4a0(param_1 + 0x11,0);
    FUN__text__005fa4a0(param_1 + 0x1d,0);
    piVar12 = (int *)*param_1;
  }
  else {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar7 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar7);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN__text__005fa4a0(param_1 + 5,lVar6);
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar7 == 0)) {
      FUN__text__005fa4a0(param_1 + 0x11,0);
      puVar8 = (ushort *)((long)param_2 - (long)*param_2);
      uVar4 = *puVar8;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar7);
      FUN__text__005fa4a0(param_1 + 0x11,(long)puVar1 + (ulong)*puVar1);
      puVar8 = (ushort *)((long)param_2 - (long)*param_2);
      uVar4 = *puVar8;
    }
    if ((uVar4 < 0xb) || ((ulong)puVar8[5] == 0)) {
      FUN__text__005fa4a0(param_1 + 0x1d,0);
      piVar12 = (int *)*param_1;
    }
    else {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar8[5]);
      FUN__text__005fa4a0(param_1 + 0x1d,(long)puVar1 + (ulong)*puVar1);
      piVar12 = (int *)*param_1;
    }
  }
  if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 5)) ||
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar7 == 0)) {
    return;
  }
  uVar13 = (ulong)*(uint *)((long)piVar12 + uVar7);
  puVar1 = (uint *)((long)((long)piVar12 + uVar7) + uVar13);
  __s = puVar1 + 1;
  uVar2 = *puVar1;
  uVar5 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar5 = strlen((char *)__s);
  }
  bVar3 = (byte)*__s;
  if (bVar3 != 0) {
    pbVar9 = (byte *)((long)piVar12 + uVar13 + uVar7 + 5);
    do {
      uVar11 = (uVar11 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar3 != 0);
  }
  param_1[1] = uVar11;
  param_1[2] = __s;
  param_1[3] = uVar5;
  if (param_1[4] != 0) {
    plVar10 = (long *)(param_1[4] + 0x48);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  param_1[4] = 0;
  return;
}


