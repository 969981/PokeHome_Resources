/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067091c; name: FUN_.text__0067091c
 */


void FUN__text__0067091c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  
  if ((*(byte *)(*param_1 + 0xf43) >> 2 & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)((long)param_1 + 0x3fc);
  plVar1 = param_1 + 0x1b;
  if ((uVar2 & 4) != 0) {
    plVar1 = param_1 + 0x21;
  }
  if ((uVar2 & 0x20) != 0) {
    plVar1 = param_1 + 0x2d;
  }
  if ((uVar2 & 0x40) != 0) {
    plVar1 = param_1 + 0x25;
  }
  FUN__text__00666f74(*param_1,0x70fdf3,*plVar1,param_1 + 0x11,param_1[0x32],param_1[0xc]);
  return;
}


