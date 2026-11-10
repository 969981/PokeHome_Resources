/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063338c; name: FUN_.text__0063338c
 */


void FUN__text__0063338c(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,*(undefined1 *)(param_1 + 0x54));
  if (iVar1 == 0) goto LAB__text__00633438;
  iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,*(undefined1 *)(param_1 + 0x54));
  if (iVar2 == iVar1) {
    FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),1,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),1,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),1,0,*(undefined1 *)(param_1 + 0x54));
    iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54));
    if (iVar2 == iVar1) goto LAB__text__006335cc;
LAB__text__006333e4:
    iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,*(undefined1 *)(param_1 + 0x54));
  }
  else {
    iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54));
    if (iVar2 != iVar1) goto LAB__text__006333e4;
LAB__text__006335cc:
    FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
    iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,*(undefined1 *)(param_1 + 0x54));
  }
  if (iVar2 == iVar1) {
    FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
  }
LAB__text__00633438:
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,*(undefined1 *)(param_1 + 0x54));
  if (iVar1 != 0) {
    iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54));
    if (iVar2 == iVar1) {
      FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
      FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
      FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),2,0,*(undefined1 *)(param_1 + 0x54));
    }
    iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,*(undefined1 *)(param_1 + 0x54));
    if (iVar2 == iVar1) {
      FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
      FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
      FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
    }
  }
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54));
  if ((iVar1 == 0) ||
     (iVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,*(undefined1 *)(param_1 + 0x54)
                                 ), iVar2 != iVar1)) {
    return;
  }
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),3,0,*(undefined1 *)(param_1 + 0x54));
  return;
}


