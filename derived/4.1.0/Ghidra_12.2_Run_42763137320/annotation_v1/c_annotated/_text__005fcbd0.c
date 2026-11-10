/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FCBD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fcbd0; name: FUN_.text__005fcbd0
 */


void FUN__text__005fcbd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = FUN__text__00635c70(param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar7 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00631008(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__00631010(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__00632408(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__005ffc50(uVar2,uVar3,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
      uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar5 = FUN__text__005ffce8(uVar2,uVar3,uVar8,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = FUN__text__00600044(uVar2,uVar3,uVar8,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (((uVar5 & 0xffff) == 0x66) || ((uVar5 & 0xffff) <= uVar4)) { // [自动静态注释] 条件判断/分支
          FUN__text__005fcce0(param_1,uVar6,param_3,param_4,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        uVar8 = uVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar1 != uVar8); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


