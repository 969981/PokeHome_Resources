/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00332d00; name: FUN_.text__00332d00
 */


void FUN__text__00332d00(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_898 [6];
  short local_880;
  char local_87e;
  char local_87d;
  char local_87c;
  char local_87b;
  undefined8 local_878;
  long local_870;
  undefined8 local_868;
  long local_860;
  long local_858;
  char acStack_850 [2048];
  undefined8 local_38;
  
  uVar3 = FUN__text__0064c260();
  iVar1 = *(int *)(param_1 + 4);
  local_38 = uVar3;
  if (iVar1 == 2) {
    local_898[0] = 0x800;
    FUN__text__00111970(&local_858,uVar3,local_898);
    local_898[0] = 0x800;
    FUN__text__00111970(&local_860,uVar3,local_898);
    memset(acStack_850,0,0x800);
    lVar9 = *(long *)(DAT_008e15a0 + 0x80);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar9 + 0x728);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    local_868 = FUN__text__0016a550();
    lVar9 = *(long *)(lVar8 + 0x60);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar9,param_1 + 0x10,local_858);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    FUN__text__00131bf8(&local_870,uVar3,&local_38);
    FUN__text__00165300(local_870);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0x2707) {
      lVar9 = FUN__text__00321ac0();
      local_878 = *(undefined8 *)(lVar9 + 0x93520);
      iVar1 = nn::time::ToCalendarTime
                        ((CalendarTime *)&local_880,(CalendarAdditionalInfo *)local_898,
                         (PosixTime *)&local_878);
      if (iVar1 == 0) {
        lVar9 = (long)local_880;
        iVar12 = (int)local_87e;
        iVar11 = (int)local_87d;
        iVar10 = (int)local_87c;
        iVar1 = (int)local_87b;
      }
      else {
        iVar12 = 0;
        iVar11 = 0;
        iVar10 = 0;
        iVar1 = 0;
        lVar9 = 0;
      }
      FUN__text__00166508(local_870,0,lVar9,4,2,1);
      FUN__text__00166508(local_870,1,iVar12,2,2,1);
      FUN__text__00166508(local_870,2,iVar11,2,2,1);
      FUN__text__00166508(local_870,3,iVar10,2,2,1);
      uVar3 = 4;
      uVar5 = 2;
      uVar6 = 2;
    }
    else {
      uVar5 = 5;
      uVar3 = 0;
      uVar6 = 0;
    }
    FUN__text__00166508(local_870,uVar3,iVar1,uVar5,uVar6,1);
    FUN__text__00163fb4(local_870,local_860,local_858);
    if (*(long *)(lVar8 + 0x188) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN__text__005dc7a0(*(long *)(lVar8 + 0x188),param_1 + 0x10);
    }
    puVar4 = (ushort *)FUN__text__005f3244(local_860);
    iVar1 = nn::util::ConvertStringUtf16NativeToUtf8(acStack_850,0x800,puVar4);
    if (iVar1 == 0) {
      FUN__text__0064b170(uVar2,acStack_850,0x70f683,&local_868);
    }
    if (local_870 != 0) {
      (**(code **)(*(long *)(local_870 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    if (local_860 != 0) {
      (**(code **)(*(long *)(local_860 + 0x48) + 0x18))();
    }
    if (local_858 != 0) {
      (**(code **)(*(long *)(local_858 + 0x48) + 0x18))();
    }
  }
  else if (iVar1 == 1) {
    uVar7 = *(uint *)(param_1 + 0xc) & 0x3fffff;
    if (((uVar7 != 0x7c) && (uVar7 != 0x27c)) && (uVar7 != 0xc87c)) {
      FUN__text__0064b200((uint *)(param_1 + 0xc));
      return;
    }
  }
  else if (iVar1 == 0) {
    FUN__text__0064b210(param_1 + 0x18);
    return;
  }
  return;
}


