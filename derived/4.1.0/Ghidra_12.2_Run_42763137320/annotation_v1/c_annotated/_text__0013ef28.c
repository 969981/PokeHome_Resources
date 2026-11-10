/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0003EF28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013ef28; name: FUN_.text__0013ef28
 */


void FUN__text__0013ef28(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (4 < *(int *)(lVar1 + 0xda0) + 1U) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0012c300(lVar1 + 0x110,*(undefined8 *)((long)*(int *)(lVar1 + 0xda0) * 8 + 0x869cc8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(code **)(lVar1 + 0xc80) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(lVar1 + 0xda0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(lVar1 + 0xc80))(lVar1 + 0xca0,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(code **)(lVar1 + 0xc00) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    uStack_4 = *(undefined4 *)(lVar1 + 0xda0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_8 = *(undefined4 *)(lVar1 + 0xda4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_28 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(lVar1 + 0xc00))(lVar1 + 0xc20,&uStack_4,&local_8,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0013d0c4(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar1 + 0x4e0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003c02e4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


