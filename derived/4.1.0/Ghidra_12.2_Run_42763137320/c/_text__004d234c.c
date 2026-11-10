/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d234c; name: FUN_.text__004d234c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__004d234c(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  uVar3 = FUN__text__00414e54();
  if ((uVar3 & 1) != 0) {
    nn::os::LockMutex((MutexType *)&DAT_00aea250);
  }
  uVar1 = *(uint *)(param_1 + 0x170);
  uVar6 = *(uint *)(param_1 + 0x174);
  uVar4 = uVar1;
  if (uVar1 < uVar6) {
LAB__text__004d23c0:
    *(uint *)(param_1 + 0x170) = uVar4 + 1;
    if (*(long *)(param_1 + 0x168) != 0) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x168) + (ulong)uVar4 * 0x30);
      *puVar7 = 0;
      puVar7[1] = 0x2b00000000;
      *(undefined4 *)(puVar7 + 2) = 0;
      puVar7[3] = 0;
      *(undefined1 *)(puVar7 + 4) = 0;
      *(undefined4 *)((long)puVar7 + 0x24) = 0;
      puVar7[5] = 0;
      if (*(long *)(param_1 + 8) == 0) {
        iVar2 = FUN__text__004d05a8(puVar7,param_2,param_3,_DAT_008ab03c,0);
      }
      else {
        iVar2 = FUN__text__004d05a8(puVar7,param_2,param_3,_DAT_008ab03c,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 500));
      }
      if (iVar2 == 1) {
        FUN__text__004d19d0(param_1,0xff,0,(*(uint *)(param_1 + 0x160) & 0xf00) == 0x300,puVar7);
        uVar3 = FUN__text__00414e54();
      }
      else {
        lVar5 = *(long *)(param_1 + 0x168);
        uVar6 = *(uint *)(param_1 + 0x170);
        if (lVar5 + (ulong)uVar1 * 0x30 < (lVar5 + (ulong)uVar6 * 0x30) - 0x30) {
          FUN__text__004d3d5c();
          lVar5 = *(long *)(param_1 + 0x168);
          uVar6 = *(uint *)(param_1 + 0x170);
        }
        FUN__text__004d3ca8(lVar5 + (ulong)uVar6 * 0x30 + -0x30);
        puVar7 = (undefined8 *)0x0;
        *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
        uVar3 = FUN__text__00414e54();
      }
      goto joined_r0x004d244c;
    }
  }
  else {
    iVar2 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar2 = 1;
    }
    uVar3 = FUN__text__004d8b50(param_1 + 0x168,iVar2);
    if (((uVar3 & 1) != 0) && (uVar1 < *(uint *)(param_1 + 0x174))) {
      uVar4 = *(uint *)(param_1 + 0x170);
      goto LAB__text__004d23c0;
    }
  }
  puVar7 = (undefined8 *)0x0;
  uVar3 = FUN__text__00414e54();
joined_r0x004d244c:
  if ((uVar3 & 1) != 0) {
    nn::os::UnlockMutex((MutexType *)&DAT_00aea250);
  }
  return puVar7;
}


