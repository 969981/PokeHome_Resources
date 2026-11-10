/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013e288; name: FUN_.text__0013e288
 */


void FUN__text__0013e288(long param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  if (4 < param_2 + 1U) goto LAB__text__0013e524;
  lVar5 = param_1 + 0x110;
  iVar1 = *(int *)(param_1 + 0xda0);
  if (param_2 != -1) {
    iVar1 = param_2;
  }
  uVar6 = *(undefined8 *)((long)iVar1 * 8 + 0x869c90);
  FUN__text__0012c300(lVar5,uVar6);
  FUN__text__0012c8d0(*(undefined4 *)(((ulong)param_3 & 1) * 4 + 0x723920),lVar5,uVar6);
  if ((param_3 & 1) == 0) {
    lVar4 = FUN__text__0012cb14(lVar5,0x724358);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x15a) = 1;
      lVar4 = FUN__text__0012cb14(lVar5,0x724360);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x15a) = 1;
        lVar4 = FUN__text__0012cb14(lVar5,0x724368);
        if (lVar4 != 0) {
          *(undefined1 *)(lVar4 + 0x15a) = 1;
          lVar5 = FUN__text__0012cb14(lVar5,0x724370);
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + 0x15a) = 1;
            return;
          }
        }
      }
    }
    goto LAB__text__0013e524;
  }
  lVar4 = param_1 + 0xa70;
  if (iVar1 == 0) {
LAB__text__0013e3b8:
    lVar3 = FUN__text__0012cb14(lVar5,0x724358);
    if (lVar3 == 0) goto LAB__text__0013e524;
    *(undefined1 *)(lVar3 + 0x15a) = 0;
  }
  else {
    local_24 = 0;
    uVar2 = (**(code **)(param_1 + 0xa50))(lVar4,&local_24);
    if ((uVar2 & 1) == 0) goto LAB__text__0013e3b8;
    lVar3 = FUN__text__0012cb14(lVar5,0x724358);
    if (lVar3 == 0) goto LAB__text__0013e524;
    *(undefined1 *)(lVar3 + 0x15a) = 1;
  }
  if (iVar1 != 1) {
    local_24 = 1;
    uVar2 = (**(code **)(param_1 + 0xa50))(lVar4,&local_24);
    if ((uVar2 & 1) == 0) goto LAB__text__0013e420;
    lVar3 = FUN__text__0012cb14(lVar5,0x724360);
    if (lVar3 == 0) goto LAB__text__0013e524;
    *(undefined1 *)(lVar3 + 0x15a) = 1;
    if (iVar1 != 2) goto LAB__text__0013e444;
    goto LAB__text__0013e488;
  }
LAB__text__0013e420:
  lVar3 = FUN__text__0012cb14(lVar5,0x724360);
  if (lVar3 == 0) goto LAB__text__0013e524;
  *(undefined1 *)(lVar3 + 0x15a) = 0;
  if (iVar1 == 2) {
LAB__text__0013e488:
    lVar3 = FUN__text__0012cb14(lVar5,0x724368);
    if (lVar3 == 0) goto LAB__text__0013e524;
    *(undefined1 *)(lVar3 + 0x15a) = 0;
  }
  else {
LAB__text__0013e444:
    local_24 = 2;
    uVar2 = (**(code **)(param_1 + 0xa50))(lVar4,&local_24);
    if ((uVar2 & 1) == 0) goto LAB__text__0013e488;
    lVar3 = FUN__text__0012cb14(lVar5,0x724368);
    if (lVar3 == 0) goto LAB__text__0013e524;
    *(undefined1 *)(lVar3 + 0x15a) = 1;
  }
  if (iVar1 != 3) {
    local_24 = 3;
    uVar2 = (**(code **)(param_1 + 0xa50))(lVar4,&local_24);
    if ((uVar2 & 1) != 0) {
      lVar5 = FUN__text__0012cb14(lVar5,0x724370);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x15a) = 1;
        return;
      }
      goto LAB__text__0013e524;
    }
  }
  lVar5 = FUN__text__0012cb14(lVar5,0x724370);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x15a) = 0;
    return;
  }
LAB__text__0013e524:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


