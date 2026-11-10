/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432d3c; name: FUN_.text__00432d3c
 */


void FUN__text__00432d3c(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  ulong *__dest;
  uint uVar2;
  ulong uVar3;
  
  __dest = (ulong *)(*param_1 + (ulong)param_2 * 0x18);
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *__dest;
  if (param_2 + 1 < uVar2) {
    memmove(__dest,__dest + 3,(ulong)((uVar2 + ~param_2) * 0x18));
    uVar2 = *(uint *)(param_1 + 1);
  }
  iVar1 = uVar2 - 1;
  *(int *)(param_1 + 1) = iVar1;
  if ((uVar3 & 0xff00000000) != 0x800000000 && (uVar3 & 0xffffffff) != 0) {
    if (((int)param_2 < iVar1) &&
       ((ulong)*(uint5 *)(*param_1 + (long)(int)param_2 * 0x18) == (uVar3 & 0xffffffffff))) {
      *param_3 = 1;
      return;
    }
    if (((0 < (int)param_2) && ((int)param_2 <= iVar1)) &&
       ((ulong)*(uint5 *)(*param_1 + (ulong)(param_2 - 1) * 0x18) == (uVar3 & 0xffffffffff))) {
      *param_3 = 1;
      return;
    }
  }
  *param_3 = 0;
  return;
}


