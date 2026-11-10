/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aca6c; name: FUN_.text__001aca6c
 */


void FUN__text__001aca6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4,undefined8 param_5,undefined4 param_6,undefined4 param_7
                        )

{
  uint uVar1;
  
  FUN__text__005f2d98(*param_4,param_5,*param_2);
  uVar1 = FUN__text__0016a510();
  FUN__text__00166508(*param_3,param_6,param_7,2,0,
                      10 < (uVar1 & 0xff) || (1 << (ulong)(uVar1 & 0x1f) & 0x602U) == 0);
  FUN__text__00163fb4(*param_3,*param_1,*param_2);
  return;
}


