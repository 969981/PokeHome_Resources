/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00374488
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474488; name: FUN_.text__00474488
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00474488(undefined8 *param_1,int *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (uint *)((long)param_1 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 >> 0xe & 1) == 0) { // [自动静态注释] 条件判断/分支
    if (param_1[0x52] != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__0042fbf4(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar2 & 1) != 0) goto LAB__text__004744c0; // [自动静态注释] 条件判断/分支
      uVar3 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *puVar1 = uVar3 | 0x2000;
    if (*param_2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004748c0(param_1,1,0x2000000,*(undefined8 *)param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(byte *)((long)param_1 + 0x312) & 0x78) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x0047457c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (param_1[0x51] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0042f65c(0,*_DAT_008a4648,param_1[0x51],0x2000000,0,4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    if ((uVar3 >> 0x10 & 1) == 0) { // [自动静态注释] 条件判断/分支
      *puVar1 = uVar3 & 0xfff0ffff | 0x12000;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004744c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x004744e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


