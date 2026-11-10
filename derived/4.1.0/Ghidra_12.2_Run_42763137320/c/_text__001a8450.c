/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a8450; name: FUN_.text__001a8450
 */


bool FUN__text__001a8450(long param_1,undefined8 *param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar4 = FUN__text__00195844(*(undefined8 *)(lVar6 + 0x10),*(undefined4 *)(param_1 + 0x24));
  iVar2 = *(int *)(lVar4 + 0xc);
  if (iVar2 == 0) {
    bVar3 = false;
  }
  else {
    uVar8 = 0;
    lVar4 = param_1 + 0x20;
    bVar3 = true;
    do {
      lVar1 = param_1 + uVar8;
      uVar7 = (undefined4)uVar8;
      if (*(char *)(lVar1 + 0x54) != '\0') {
        local_68 = 0;
        uStack_64 = uVar7;
        FUN__text__00191328(&local_7c,lVar4,&local_68);
        local_90 = local_7c;
        uStack_88 = local_74;
        local_80 = local_6c;
        uVar5 = FUN__text__001a96cc(lVar6,&local_90,iVar2);
        if ((uVar5 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001a86d0;
      }
      if (*(char *)(lVar1 + 0x59) != '\0') {
        local_68 = 1;
        uStack_64 = uVar7;
        FUN__text__00191328(&local_7c,lVar4,&local_68);
        local_90 = local_7c;
        uStack_88 = local_74;
        local_80 = local_6c;
        uVar5 = FUN__text__001a96cc(lVar6,&local_90,iVar2);
        if ((uVar5 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001a86d0;
      }
      if (*(char *)(lVar1 + 0x5e) != '\0') {
        local_68 = 2;
        uStack_64 = uVar7;
        FUN__text__00191328(&local_7c,lVar4,&local_68);
        local_90 = local_7c;
        uStack_88 = local_74;
        local_80 = local_6c;
        uVar5 = FUN__text__001a96cc(lVar6,&local_90,iVar2);
        if ((uVar5 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001a86d0;
      }
      if (*(char *)(lVar1 + 99) != '\0') {
        local_68 = 3;
        uStack_64 = uVar7;
        FUN__text__00191328(&local_7c,lVar4,&local_68);
        local_90 = local_7c;
        uStack_88 = local_74;
        local_80 = local_6c;
        uVar5 = FUN__text__001a96cc(lVar6,&local_90,iVar2);
        if ((uVar5 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001a86d0;
      }
      if (*(char *)(lVar1 + 0x68) != '\0') {
        local_68 = 4;
        uStack_64 = uVar7;
        FUN__text__00191328(&local_7c,lVar4,&local_68);
        local_90 = local_7c;
        uStack_88 = local_74;
        local_80 = local_6c;
        uVar5 = FUN__text__001a96cc(lVar6,&local_90,iVar2);
        if ((uVar5 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001a86d0;
      }
      if (*(char *)(lVar1 + 0x6d) != '\0') {
        local_68 = 5;
        uStack_64 = uVar7;
        FUN__text__00191328(&local_7c,lVar4,&local_68);
        local_90 = local_7c;
        uStack_88 = local_74;
        local_80 = local_6c;
        uVar5 = FUN__text__001a96cc(lVar6,&local_90,iVar2);
        if ((uVar5 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) {
LAB__text__001a86d0:
          *param_2 = local_7c;
          param_2[1] = local_74;
          *(undefined4 *)(param_2 + 2) = local_6c;
          return bVar3;
        }
      }
      bVar3 = uVar8 < 4;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 5);
  }
  return bVar3;
}


