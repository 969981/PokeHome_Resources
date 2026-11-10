/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003690E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004690e0; name: FUN_.text__004690e0
 */


void FUN__text__004690e0(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00432910(param_1 + 0x48,param_2,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = *(uint *)(local_18 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = FUN__text__004329c0(param_1 + 0x48,(ulong)uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 8 == lVar3) { // [自动静态注释] 条件判断/分支
        uVar4 = 1L << ((ulong)uVar1 & 0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = **(ulong **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uVar2 & uVar4) != 0) { // [自动静态注释] 条件判断/分支
          uVar2 = uVar2 & (uVar4 ^ 0xffffffffffffffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          **(ulong **)(param_1 + 0x58) = uVar2;
        } // [自动静态注释] 作用域/控制流边界
        if (((uVar2 == 0) && (lVar3 = *(long *)(param_1 + 0x58), *(long *)(lVar3 + 8) == 0)) && // [自动静态注释] 条件判断/分支
           ((*(long *)(param_1 + 0x38) == 0 || (*(long *)(*(long *)(param_1 + 0x38) + 8) == 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(long *)(lVar3 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(lVar3 + 0x18) = 0;
            FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined4 *)(lVar3 + 0x1c) = 0;
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__00400fc0(2,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined8 *)(param_1 + 0x58) = 0;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      if (local_18 != 0) { // [自动静态注释] 条件判断/分支
        if (*(long *)(local_18 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(long *)(local_18 + 0x18) = 0;
        *(undefined8 *)(local_18 + 0x20) = 0;
        *(undefined4 *)(local_18 + 0x28) = 1;
        FUN__text__00400fc0(2,local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


