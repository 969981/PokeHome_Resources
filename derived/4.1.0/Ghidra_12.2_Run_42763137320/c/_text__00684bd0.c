/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684bd0; name: FUN_.text__00684bd0
 */


undefined8 FUN__text__00684bd0(long *param_1,long *param_2,long param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  size_t __n;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = *param_1;
    puVar2 = *(undefined8 **)(lVar4 + 0x18);
    *(undefined1 *)((long)puVar2 + 7) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)puVar2 + -1) = *puVar2;
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(lVar4 + 0x18) = lVar3 + -1;
    *(byte *)(lVar3 + 3) = *(byte *)(lVar3 + 3) | 8;
    uVar1 = FUN__text__006799cc(*(undefined8 *)(lVar4 + 0x18));
    FUN__text__0067999c(*(long *)(lVar4 + 0x18),
                        (uint)*(byte *)(*(long *)(lVar4 + 0x18) + 3) |
                        ((int)param_3 + (uVar1 >> 8)) * 0x100);
    if (param_4 == 0) {
      __n = param_3 - 1;
      *(char *)(*(long *)(lVar4 + 0x18) + 9) = (char)__n;
      memset(*(void **)(lVar4 + 0x20),0,__n);
      *(size_t *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + __n;
    }
    *param_2 = *param_2 + param_3;
    *(byte *)((long)param_2 + 0xd) = *(byte *)((long)param_2 + 0xd) | 8;
  }
  return 0;
}


