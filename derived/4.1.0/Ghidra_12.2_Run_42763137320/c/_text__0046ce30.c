/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046ce30; name: FUN_.text__0046ce30
 */


void FUN__text__0046ce30(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_48 [4];
  char local_44 [4];
  
  if (*(uint *)(param_2 + 0x148) != 0) {
    puVar6 = *(undefined8 **)(param_2 + 0x140);
    puVar8 = puVar6 + (ulong)*(uint *)(param_2 + 0x148) * 5;
    do {
      if (*(uint *)(puVar6 + 4) != 0) {
        plVar9 = (long *)puVar6[3];
        plVar1 = plVar9 + *(uint *)(puVar6 + 4);
        do {
          local_78 = (long *)*puVar6;
          uStack_70 = 0;
          local_68 = *(undefined4 *)(puVar6 + 2);
          lVar7 = *plVar9;
          uVar4 = (ulong)*(uint *)(lVar7 + 0x50);
          if (*(uint *)(lVar7 + 0x50) != 0) {
            puVar5 = *(undefined8 **)(lVar7 + 0x48);
            puVar10 = puVar5;
            do {
              if (*(char *)((long)*puVar10 + 0xd) == '\x04') {
                FUN__text__0046d170(param_1,&local_78,*(undefined4 *)*puVar10,param_3,param_4);
                puVar5 = *(undefined8 **)(lVar7 + 0x48);
                uVar4 = (ulong)*(uint *)(lVar7 + 0x50);
              }
              puVar10 = puVar10 + 1;
            } while (puVar10 != puVar5 + uVar4);
          }
          lVar7 = *plVar9;
          local_44[0] = '\0';
          local_48[0] = 0;
          local_78 = (long *)0x0;
          FUN__text__0043e620(lVar7,puVar6,param_3,param_4,&local_78,local_44,local_48);
          if ((local_44[0] != '\0') && (local_78 != (long *)0x0)) {
            uVar4 = FUN__text__0043d900((ulong)*(uint *)(lVar7 + 0x10) | 0x400000000,local_78 + 1);
            if ((uVar4 & 1) == 0) {
              *(int *)((long)local_78 + 0xbc) = *(int *)((long)local_78 + 0xbc) + 1;
              FUN__text__004449ec();
              FUN__text__00444060(local_78);
              plVar3 = local_78;
              iVar2 = *(int *)((long)local_78 + 0xbc) + -1;
              *(int *)((long)local_78 + 0xbc) = iVar2;
              if (iVar2 == 0) {
                (**(code **)(*local_78 + 0x10))(local_78);
                FUN__text__00400fc0(0,plVar3);
              }
            }
            else {
              FUN__text__0046e348(*param_1,local_78);
            }
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar8);
  }
  return;
}


