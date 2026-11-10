/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003192D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004192d0; name: FUN_.text__004192d0
 */


void FUN__text__004192d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5,undefined4 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__00413950(1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < param_5) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00413950(1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413b10(auStack_70,auStack_70 + -((ulong)uVar2 * 8 + 0xf & 0xffffffff0),(ulong)uVar2, // [自动静态注释] 调用尚未恢复正式名称的函数
                      0x7196ab,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_4 = param_5;
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__00412c50(&local_38,local_68 + lVar3,0x18,8,0,param_6,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_38 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        *local_38 = 0x8875a8;
        local_38[1] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_38[2] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      thunk_FUN__text__00413460(auStack_70,*(undefined8 *)(local_68 + lVar3)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = lVar3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)uVar2 * 8 != lVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413c90(param_1,auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00413c20(auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


