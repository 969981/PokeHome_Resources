/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00526840; name: FUN_.text__00526840
 */


void FUN__text__00526840(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        long param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_80;
  ulong local_78;
  
  lVar2 = *(long *)(*(long *)(param_5 + 8) + 0x20);
  lVar4 = *(long *)(*(long *)(param_5 + 8) + 0x48);
  uVar7 = *(undefined8 *)(lVar2 + 0x78);
  uVar8 = *(undefined8 *)(lVar2 + 0x80);
  uVar9 = *(undefined8 *)(lVar2 + 0x88);
  FUN__text__00526e0c(param_1,param_2,lVar2);
  local_80 = 0;
  local_78 = 0;
  FUN__text__00525410(*(undefined4 *)(lVar4 + 0x50),param_1,lVar4,&local_80);
  uVar1 = (ulong)*(uint *)(param_1 + 0x60);
  if (*(uint *)(param_1 + 0x60) != 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    plVar6 = plVar5;
    do {
      if (*(char *)(*plVar5 + 0x568) != '\0') {
        FUN__text__00522400(uVar7,uVar8,uVar9,*plVar5,&local_80,*(undefined8 *)(param_1 + 0x78),
                            lVar4);
        plVar6 = *(long **)(param_1 + 0x58);
        uVar1 = (ulong)*(uint *)(param_1 + 0x60);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar6 + uVar1);
    if (uVar1 != 0) {
      iVar3 = 1;
      do {
        lVar4 = *plVar6;
        if (*(char *)(lVar4 + 0x568) == '\0') {
          uVar1 = FUN__text__0052163c(lVar4,param_1);
          *(undefined4 *)(lVar4 + (uVar1 & 0xffffffff) * 0x40 + 200) = 0;
        }
        else {
          FUN__text__005273a0(0,0,0,0,param_1,param_2,lVar4,iVar3,lVar2,param_3);
          iVar3 = iVar3 + 1;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != (long *)(*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8))
      ;
    }
  }
  FUN__text__00527718(*(undefined4 *)
                       (*(long *)(param_4 + (ulong)(*(int *)(param_4 + 0x80) - 1) * 8 + 0x40) + 0xa4
                       ),param_1,param_2,param_3,lVar2);
  if (local_80 != 0) {
    local_78 = local_78 & 0xffffffff00000000;
    FUN__text__00400fc0(9);
  }
  return;
}


