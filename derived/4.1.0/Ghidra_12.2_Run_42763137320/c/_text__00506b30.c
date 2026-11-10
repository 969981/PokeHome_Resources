/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00506b30; name: FUN_.text__00506b30
 */


undefined8 FUN__text__00506b30(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(char *)(DAT_00aebab8 + 0xd0) != '\0') {
    if (DAT_00aea688 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN__text__00400f80(4,0xf0);
      if (puVar4 == (undefined8 *)0x0) {
        DAT_00aea688 = (undefined8 *)0x0;
        goto LAB__text__00506c08;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      DAT_00ae9690 = DAT_00ae9690 + 1;
      puVar1 = (undefined8 *)&DAT_00ae9690;
      if (DAT_00ae96a0 != 0) {
        puVar1 = DAT_00ae9698;
      }
      puVar3 = puVar4;
      puVar4[3] = DAT_00ae9698;
      DAT_00ae9698 = puVar3;
      puVar1[2] = puVar4;
      *(undefined2 *)(puVar4 + 0x1c) = 0x101;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *puVar4 = &DAT_008874b8;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      DAT_00aea688 = puVar4;
      puVar4[0x16] = 0;
      puVar4[0x17] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
      iVar2 = *(int *)(puVar4 + 0x1b);
    }
    else {
      iVar2 = *(int *)(DAT_00aea688 + 0x1b);
      puVar4 = DAT_00aea688;
    }
    if (iVar2 != 0) {
      lVar5 = FUN__text__00447b30(DAT_00ae9a50,*(undefined8 *)puVar4[0x1a]);
      if (lVar5 == 0) {
        return 0;
      }
      goto LAB__text__00506c24;
    }
  }
LAB__text__00506c08:
  lVar5 = FUN__text__00447b30(DAT_00ae9a50,*(undefined8 *)(DAT_00aebab8 + 200));
  if (lVar5 == 0) {
    return 0;
  }
LAB__text__00506c24:
  return *(undefined8 *)(lVar5 + 0x48);
}


