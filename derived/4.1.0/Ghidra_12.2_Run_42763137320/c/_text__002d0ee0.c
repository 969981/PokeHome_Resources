/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d0ee0; name: FUN_.text__002d0ee0
 */


void FUN__text__002d0ee0(undefined8 param_1,undefined2 *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_c4 [90];
  undefined1 local_6a;
  byte local_69;
  undefined2 local_68;
  undefined1 local_66;
  
  if (DAT_008e52a8 != 0) {
    plVar2 = *(long **)(DAT_008e5278 + 0x1f0);
    for (plVar1 = *(long **)(DAT_008e5278 + 0x1e8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar9 = *plVar1;
      plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))();
      plVar8 = (long *)FUN__text__002d29c4();
      if (plVar8 == plVar7) {
LAB__text__002d0f78:
        FUN__text__002d4ec4(auStack_c4,lVar9,*param_2);
        local_6a = *(undefined1 *)(param_2 + 1);
        local_68 = param_2[4];
        local_66 = *(undefined1 *)(param_2 + 8);
        uVar4 = FUN__text__005fdad0(*param_2);
        if ((uVar4 != 0x2a6) || ((param_2[1] & 0xfffe) != 2)) {
          bVar3 = FUN__text__00600770(uVar4 & 0xffff);
          iVar5 = FUN__text__005ff0fc(uVar4,param_2[1],7);
          iVar6 = FUN__text__005ff214(uVar4,param_2[1],7);
          if ((iVar5 == 0) || ((bVar3 & *(int *)(param_2 + 2) == 0) == 1)) {
            local_69 = local_69 & 0xfc | 1;
            goto LAB__text__002d102c;
          }
          if ((iVar5 == 0xfe) || ((bVar3 & *(int *)(param_2 + 2) == 1) != 0)) {
            local_69 = local_69 & 0xfc | 2;
            goto LAB__text__002d102c;
          }
          if (iVar6 != 0) goto LAB__text__002d102c;
        }
        local_69 = local_69 | 3;
LAB__text__002d102c:
        FUN__text__002d4e94(lVar9,*param_2,auStack_c4);
        return;
      }
      do {
        plVar7 = (long *)*plVar7;
      } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
      if (plVar7 != (long *)0x0) {
        if (lVar9 == 0) {
          return;
        }
        goto LAB__text__002d0f78;
      }
    }
  }
  return;
}


