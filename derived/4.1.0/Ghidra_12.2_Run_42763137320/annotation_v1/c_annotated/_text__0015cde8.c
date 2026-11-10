/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005CDE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015cde8; name: FUN_.text__0015cde8
 */


void FUN__text__0015cde8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005f3ec0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(param_1 + 0x158) == '\0') { // [自动静态注释] 条件判断/分支
    if (**(long **)(param_1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = FUN__text__006bf32c(); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar2 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x160) = uVar1;
      uVar4 = *(undefined4 *)(*plVar2 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_1 + 0x16c) = uVar4;
      *(undefined4 *)(param_1 + 0x170) = uVar4;
      lVar3 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar5 = *(float *)(lVar3 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(undefined4 *)(lVar3 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(lVar3 + 0xec);
      *(undefined4 *)(param_1 + 0x128) = uVar4;
      *(undefined1 *)(param_1 + 0x158) = 1;
      *(int *)(param_1 + 0x138) = (int)fVar5;
      lVar3 = FUN__text__006b46d0(*plVar2,0x71679d); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((lVar3 != 0) || // [自动静态注释] 条件判断/分支
         (lVar3 = FUN__text__006b46d0(**(undefined8 **)(param_1 + 0x58),0x710d96), lVar3 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
        *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
        *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


