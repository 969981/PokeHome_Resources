/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051736c; name: FUN_.text__0051736c
 */


ulong FUN__text__0051736c(uint *param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  return ((((((((((((param_3 & 0xff ^ 0xaf63bd4c8601b7df) * 0x100000001b3 ^ uVar2 & 0xff) *
                   0x100000001b3 ^ uVar2 >> 8 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x10 & 0xff) *
                 0x100000001b3 ^ uVar2 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x20 & 0xff) *
               0x100000001b3 ^ uVar2 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x30 & 0xff) *
             0x100000001b3 ^ uVar2 >> 0x38) * 0x100000001b3 ^ (ulong)uVar1 & 0xff) * 0x100000001b3 ^
          (ulong)(uVar1 >> 8) & 0xff) * 0x100000001b3 ^ (ulong)(uVar1 >> 0x10) & 0xff) *
         0x100000001b3 ^ (ulong)(uVar1 >> 0x18);
}


