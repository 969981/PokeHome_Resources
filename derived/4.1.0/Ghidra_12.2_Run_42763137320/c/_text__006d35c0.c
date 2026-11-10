/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d35c0; name: FUN_.text__006d35c0
 */


/* WARNING: Removing unreachable block (ram,0x006d37bc) */
/* WARNING: Removing unreachable block (ram,0x006d3804) */
/* WARNING: Removing unreachable block (ram,0x006d37d0) */
/* WARNING: Removing unreachable block (ram,0x006d3814) */
/* WARNING: Removing unreachable block (ram,0x006d3820) */
/* WARNING: Removing unreachable block (ram,0x006d3844) */
/* WARNING: Removing unreachable block (ram,0x006d37f4) */
/* WARNING: Removing unreachable block (ram,0x006d3834) */
/* WARNING: Removing unreachable block (ram,0x006d3840) */
/* WARNING: Removing unreachable block (ram,0x006d37f8) */

undefined8
FUN__text__006d35c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  size_t __n;
  ulong uVar3;
  undefined8 local_90 [2];
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  __n = (ulong)*(uint *)(param_5 + 0x10) * 8;
  if (*(uint *)(param_5 + 0x10) != 0) {
    local_90[0] = param_4;
    local_78 = param_3;
    local_70 = param_6;
    uStack_6c = param_7;
    memset((void *)((long)local_90 - (__n + 0xf & 0xffffffff0)),0,__n);
    uVar3 = 0;
    local_68 = 0;
    local_80 = param_1 + 0x100;
    do {
      uVar1 = **(uint **)(*(long *)(param_5 + 0x18) + uVar3 * 8);
      if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x006d36bc */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__006d36c8 + (ulong)*(byte *)((ulong)uVar1 + 0x7666ca) * 4))();
        return uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_5 + 0x10));
  }
  return 0;
}


