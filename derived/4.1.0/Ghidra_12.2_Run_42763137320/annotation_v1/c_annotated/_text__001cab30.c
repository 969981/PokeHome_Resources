/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000CAB30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cab30; name: FUN_.text__001cab30
 */


void FUN__text__001cab30(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__00195844(*(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(param_1 + 0x34)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(lVar4 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined4 *)((long)*(int *)(lVar2 + 0xc) * 4 + 0x725e90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x300); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) { // [自动静态注释] 条件判断/分支
    local_38 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00155100(*(undefined8 *)(lVar5 + 0x2d0),&local_38,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003d5154(lVar4,uVar1,uVar3,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


