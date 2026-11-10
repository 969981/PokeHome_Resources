/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036dd10; name: FUN_.text__0036dd10
 */


void FUN__text__0036dd10(long param_1,int *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  if (*(char *)((long)param_2 + 0xd) != '\0') {
    return;
  }
  uVar4 = FUN__text__0036dea0();
  if ((uVar4 & 1) == 0) {
    uVar3 = param_2[6] + (uint)*(ushort *)(param_2 + 1) * 7;
    if (*param_2 != 0x365) {
      uVar3 = (uint)*(ushort *)(param_2 + 1);
    }
    uVar7 = 0;
    if (uVar3 < 0x3f) {
      uVar7 = uVar3;
    }
    FUN__text__0036d8b0(param_1,*param_2,param_2[2],(char)param_2[3],uVar7,param_2[5]);
  }
  iVar5 = *param_2;
  uVar3 = FUN__text__00206710(0,iVar5);
  if (uVar3 == 0) {
    uVar3 = FUN__text__00206710(1,iVar5);
    if (uVar3 == 0) {
      uVar3 = FUN__text__00206710(2,iVar5);
      if (uVar3 != 0) {
        iVar5 = 2;
        uVar7 = 0;
        if (uVar3 < 0xd3) {
          uVar7 = uVar3;
        }
        uVar7 = uVar7 - 1;
        if (uVar7 < 0xd2) goto LAB__text__0036de28;
      }
    }
    else {
      iVar5 = 1;
      uVar7 = 0;
      if (uVar3 < 0xd4) {
        uVar7 = uVar3;
      }
      uVar7 = uVar7 - 1;
      if (uVar7 < 0xd3) goto LAB__text__0036de28;
    }
  }
  else {
    iVar5 = 0;
    uVar7 = 0;
    if (uVar3 < 0x191) {
      uVar7 = uVar3;
    }
    uVar7 = uVar7 - 1;
    if (uVar7 < 400) {
LAB__text__0036de28:
      lVar1 = param_1 + 0x60;
      if (iVar5 == 1) {
        lVar1 = param_1 + 0x4b60;
      }
      lVar2 = param_1 + 0x72f0;
      if (iVar5 != 2) {
        lVar2 = lVar1;
      }
      puVar6 = (uint *)(lVar2 + (ulong)uVar7 * 0x30 + 0x20);
      if (param_3 - 2U < 10) {
        uVar3 = *(uint *)((long)(int)(param_3 - 2U) * 4 + 0x735324);
      }
      else {
        uVar3 = 0;
      }
      *puVar6 = 4 << (ulong)(uVar3 & 0x1f) & 0x7ffcU | *puVar6 | 1;
      return;
    }
  }
  return;
}


