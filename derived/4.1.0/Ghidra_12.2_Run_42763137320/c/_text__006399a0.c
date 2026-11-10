/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006399a0; name: FUN_.text__006399a0
 */


void FUN__text__006399a0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  FUN__text__00646ff4(auStack_40);
  FUN__text__00647038(auStack_40,param_1,0);
  if (*(int *)(param_2 + 0x28) != 0) {
    FUN__text__0064720c(auStack_40,*(undefined4 *)(param_2 + 0x10));
    FUN__text__00647558(auStack_40,*(undefined4 *)(param_2 + 0x20));
    FUN__text__00648da8(auStack_40,*(undefined4 *)(param_2 + 0x18));
    FUN__text__00647410(auStack_40,*(undefined4 *)(param_2 + 0x28));
    FUN__text__006484bc(auStack_40,*(undefined2 *)(param_2 + 0x2c));
    FUN__text__00647300(auStack_40,*(undefined1 *)(param_2 + 0x2e));
    FUN__text__00648608(auStack_40,*(undefined2 *)(param_2 + 0x32));
    FUN__text__00648754(auStack_40,*(undefined2 *)(param_2 + 0x32));
    FUN__text__00648380(auStack_40,*(undefined2 *)(param_2 + 0x30));
    FUN__text__0064918c(auStack_40,*(undefined1 *)(param_2 + 0x2e));
    FUN__text__00648ef4(auStack_40,0);
    FUN__text__006477f0(auStack_40,*(undefined4 *)(param_2 + 0x44));
    lVar2 = FUN__text__00602950();
    FUN__text__00647afc(auStack_40,*(undefined1 *)(lVar2 + 0x2c8));
    FUN__text__00649558(auStack_40,0xff);
    FUN__text__00647c48(auStack_40,*(undefined1 *)(param_2 + 0x36));
    FUN__text__00647d7c(auStack_40,*(undefined1 *)(param_2 + 0x38));
    FUN__text__00647eb0(auStack_40,*(undefined1 *)(param_2 + 0x3a));
    FUN__text__00647fe4(auStack_40,*(undefined1 *)(param_2 + 0x3c));
    FUN__text__00648118(auStack_40,*(undefined1 *)(param_2 + 0x3e));
    FUN__text__0064824c(auStack_40,*(undefined1 *)(param_2 + 0x40));
    uVar1 = FUN__text__00638c38(*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2c),
                                *(undefined1 *)(param_2 + 0x34),0);
    FUN__text__006479b0(auStack_40,uVar1);
    FUN__text__006488a0(auStack_40,*(char *)(param_2 + 0x34) == '\0');
    FUN__text__006489dc(auStack_40,*(char *)(param_2 + 0x34) == '\x01');
    FUN__text__00648b20(auStack_40,*(char *)(param_2 + 0x34) == '\x02');
    FUN__text__00648c64(auStack_40,0);
    FUN__text__006013f0(*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2c));
    uVar1 = FUN__text__00601470(*(undefined1 *)(param_2 + 0x2e));
    FUN__text__006476a4(auStack_40,uVar1);
    FUN__text__006492c0(auStack_40,*(undefined1 *)(param_2 + 0x4c));
    FUN__text__0064940c(auStack_40,*(undefined1 *)(param_2 + 0x4a));
  }
  FUN__text__00647010(auStack_40);
  return;
}


