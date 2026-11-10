/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bbc98; name: FUN_.text__006bbc98
 */


void FUN__text__006bbc98(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,
                        ulong param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  size_t __n;
  undefined1 *__s;
  undefined1 auStack_e0 [128];
  
  uVar1 = *(uint *)(param_4 + 0x94) & ((int)*(uint *)(param_4 + 0x94) >> 0x1f ^ 0xffffffffU);
  if ((param_5 & 1) == 0) {
    uVar1 = *(uint *)(param_4 + 0x90);
  }
  if ((int)uVar1 < 1) {
    __s = (undefined1 *)0x0;
  }
  else {
    __n = FUN__text__006c1740(param_4,uVar1);
    __s = auStack_e0 + (0x80 - (__n + 0xf & 0xfffffffffffffff0));
    memset(__s,0,__n);
    FUN__text__006c17b0(__s,__n,param_4,uVar1);
  }
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_6,__s,param_7);
  return;
}


