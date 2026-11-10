/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EDC94
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006edc94; name: FUN_.text__006edc94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006edc94(undefined4 param_1,long param_2,long param_3,undefined4 param_4,int param_5 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(undefined8 *)(param_3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(param_3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*_DAT_008a6f40)(*(undefined8 *)(param_2 + 0xb0),0,0,0x7fffffff,0x7fffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a6ea0)(*(undefined8 *)(param_2 + 0xb0),0,0,0,uVar1,uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_5 == 3) { // [自动静态注释] 条件判断/分支
    uVar1 = *(undefined8 *)(param_2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_5 != 2) { // [自动静态注释] 条件判断/分支
      if (param_5 == 1) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x006edd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*_DAT_008a6f48)(param_1,*(undefined8 *)(param_2 + 0xb0),1,param_4,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      nn::detail::UnexpectedDefaultImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = *(undefined8 *)(param_2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x006eddac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6f48)(param_1,uVar1,uVar2,param_4,0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


