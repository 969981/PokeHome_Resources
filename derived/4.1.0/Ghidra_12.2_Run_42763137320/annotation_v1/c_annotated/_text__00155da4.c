/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00055DA4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00155da4; name: FUN_.text__00155da4
 */


void FUN__text__00155da4(undefined8 param_1,uint *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == (uint *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__00155348(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_30 = 0x4000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_28 = 0xf424000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (4 < param_3) { // [自动静态注释] 条件判断/分支
    uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((-1 < (int)uVar1) && (uVar1 != 0)) && ((ulong)uVar1 <= param_3 - 1)) && // [自动静态注释] 条件判断/分支
       (uVar2 = FUN__text__00155e54((long)param_2 + (ulong)uVar1,&local_40), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0015533c(param_1,(long)param_2 + (ulong)*param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00155348(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


