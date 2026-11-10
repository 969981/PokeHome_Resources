/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00639028; name: FUN_.text__00639028
 */


void FUN__text__00639028(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_52;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_46;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x148,4);
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  memset(__s,0,0x148);
  param_1[2] = 0x148;
  param_1[3] = 4;
  lVar1 = *(long *)(uVar2 + 0x98);
  *param_1 = __s;
  param_1[1] = param_2;
  *(long *)(uVar2 + 0x98) = lVar1 + -1;
  memset(__s,0,0x148);
  local_90 = 0;
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0x3ffffffff;
  local_68 = 0x402;
  local_64 = 0xffff00ff00010000;
  local_88 = 0;
  local_5c = 0x1ff;
  local_70 = 0xffffffffffffffff;
  local_4c = 0xffff;
  local_48 = 0;
  local_46 = 0x1000100;
  local_5a = 0xffffffffffffffff;
  local_52 = 0xffffffff;
  FUN__text__00639150(&local_90,param_3);
  FUN__text__006399a0(__s,&local_90);
  return;
}


