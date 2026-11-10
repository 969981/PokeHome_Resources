/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c070; name: FUN_.text__0045c070
 */


void FUN__text__0045c070(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long local_48;
  
  uVar4 = *(uint *)(param_1 + 0x148);
  if (uVar4 != 0) {
    do {
      uVar4 = uVar4 - 1;
      uVar2 = (ulong)uVar4;
      local_48 = *(long *)(param_1 + 0x140) + uVar2 * 0x118;
      uVar1 = *(uint *)(local_48 + 0x10c) >> 8 & 0xf;
      if ((3 < uVar1) || ((*(uint *)(local_48 + 0x10c) & 0xff) == 0 && uVar1 != 3)) {
        lVar3 = *(long *)(param_1 + 0x140) + uVar2 * 0x118;
        if (*(char *)(lVar3 + 0x110) == '\0') {
          *(undefined4 *)(local_48 + 0x10c) = param_2;
          *(undefined1 *)(lVar3 + 0x110) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x140) + uVar2 * 0x118 + 0x110) = 1;
        }
        else {
          FUN__text__0045c7b0(param_1 + 0x28,&local_48);
        }
      }
    } while (uVar4 != 0);
  }
  return;
}


