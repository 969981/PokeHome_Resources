/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632cec; name: FUN_.text__00632cec
 */


char FUN__text__00632cec(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,uVar1);
  cVar2 = iVar3 != 0;
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,uVar1);
  if (iVar3 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,uVar1);
  if (iVar3 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,uVar1);
  if (iVar3 != 0) {
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}


