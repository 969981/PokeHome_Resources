/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F9B40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f9b40; name: FUN_.text__005f9b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f9b40(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005a0018(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(long *)(param_1 + 0x138) != 0) && (*(long *)(param_1 + 0x140) != 0)) { // [自动静态注释] 条件判断/分支
    iVar1 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar3 + 0x100) == 0) { // [自动静态注释] 条件判断/分支
      lVar4 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ec8e0(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005fa1d0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(int *)(lVar4 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006eddd4(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(lVar4 + 0x160) = 0;
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__006ec93c(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pcVar2 = *(code **)(lVar3 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(lVar3 + 0x104) = iVar1;
      if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x80) = 0;
        *(undefined8 *)(lVar3 + 0x88) = 0;
        (*pcVar2)(lVar3 + 0xa0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar1 = *(int *)(lVar3 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(lVar3 + 0xa0) = param_1;
      *(code **)(lVar3 + 0x80) = FUN__text__005fa34c;
      *(undefined **)(lVar3 + 0x88) = &DAT__text__005fa354;
      lVar4 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 **)(lVar3 + 0x90) = &LAB__text__005fa358;
      *(undefined1 **)(lVar3 + 0x98) = &LAB__text__005fa364;
      FUN__text__006ec8e0(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(lVar3 + 0x80))((long *)(lVar3 + 0xa0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(int *)(lVar4 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006eddd4(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(lVar4 + 0x160) = 0;
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__006ec93c(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005b5520(*_DAT_0089f418,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(lVar3 + 0x109) = 1;
    *(undefined1 *)(param_1 + 0x180) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


