/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00506a10; name: FUN_.text__00506a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00506a10(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uStack_21;
  
  if (*(char *)(DAT_00aebab8 + 0xd0) != '\0') {
    if (DAT_00aea688 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN__text__00400f80(4,0xf0);
      if (puVar4 == (undefined8 *)0x0) {
        DAT_00aea688 = (undefined8 *)0x0;
        goto LAB__text__00506ae0;
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
      lVar5 = *(long *)puVar4[0x1a];
      goto joined_r0x00506aec;
    }
  }
LAB__text__00506ae0:
  lVar5 = *(long *)(DAT_00aebab8 + 200);
joined_r0x00506aec:
  if (lVar5 != -1) {
    FUN__text__0044b8a0(_DAT_008a4480,lVar5,&uStack_21);
  }
  return;
}


