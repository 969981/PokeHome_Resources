/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006026d0; name: FUN_.text__006026d0
 */


void FUN__text__006026d0(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x2e8,8);
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  lVar3 = *(long *)(uVar2 + 0x98);
  if (lVar3 == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *param_1 = lVar1;
  param_1[1] = (long)param_2;
  *(long **)(uVar2 + lVar3 * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0x70f683;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined4 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0x70f683;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined4 *)(lVar1 + 0xd8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined4 *)(lVar1 + 0x138) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0x70f683;
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined4 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 400) = 0;
  *(undefined4 *)(lVar1 + 0x198) = 0;
  *(undefined4 *)(lVar1 + 0x1c8) = 0;
  *(undefined8 *)(lVar1 + 0x1b0) = 0x70f683;
  *(undefined4 *)(lVar1 + 0x1f8) = 0;
  *(undefined8 *)(lVar1 + 0x1e0) = 0x70f683;
  *(undefined8 *)(lVar1 + 0x200) = 0;
  *(undefined8 *)(lVar1 + 0x208) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x210) = 0x70f683;
  *(undefined4 *)(lVar1 + 0x228) = 0;
  *(undefined8 *)(lVar1 + 0x220) = 0;
  *(undefined8 *)(lVar1 + 0x218) = 0;
  *(undefined8 *)(lVar1 + 0x230) = 0;
  *(undefined8 *)(lVar1 + 0x238) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x240) = 0x70f683;
  *(undefined4 *)(lVar1 + 600) = 0;
  *(undefined8 *)(lVar1 + 0x250) = 0;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  *(undefined8 *)(lVar1 + 0x260) = 0;
  *(undefined8 *)(lVar1 + 0x268) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x270) = 0x70f683;
  *(undefined4 *)(lVar1 + 0x288) = 0;
  *(undefined8 *)(lVar1 + 0x280) = 0;
  *(undefined8 *)(lVar1 + 0x278) = 0;
  *(undefined8 *)(lVar1 + 0x290) = 0;
  *(undefined8 *)(lVar1 + 0x298) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x2a0) = 0x70f683;
  *(undefined4 *)(lVar1 + 0x2b8) = 0;
  *(undefined8 *)(lVar1 + 0x2b0) = 0;
  *(undefined8 *)(lVar1 + 0x2a8) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0xf0) = 0x70f683;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0;
  *(undefined8 *)(lVar1 + 0x140) = 0;
  *(undefined8 *)(lVar1 + 0x148) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x150) = 0x70f683;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  *(undefined8 *)(lVar1 + 0x178) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x180) = 0x70f683;
  *(undefined8 *)(lVar1 + 0x188) = 0;
  *(undefined8 *)(lVar1 + 0x1a0) = 0;
  *(undefined8 *)(lVar1 + 0x1a8) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x1b8) = 0;
  *(undefined8 *)(lVar1 + 0x1c0) = 0;
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  *(undefined8 *)(lVar1 + 0x1d8) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar1 + 0x1e8) = 0;
  *(undefined8 *)(lVar1 + 0x1f0) = 0;
  param_1[2] = 0x2e8;
  param_1[3] = 8;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  return;
}


