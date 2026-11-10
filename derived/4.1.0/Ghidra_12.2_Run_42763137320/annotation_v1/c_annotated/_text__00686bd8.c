/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00586BD8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686bd8; name: FUN_.text__00686bd8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN__text__00686bd8(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = _DAT_008a6620; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*_DAT_008a6620 == 0) { // [自动静态注释] 条件判断/分支
    piVar1 = _DAT_008a6620 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *_DAT_008a6620 = 1;
    piVar2[1] = *piVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = FUN__text__00686a30(0x4000,_DAT_008a6630,0,0x70eaa1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(piVar2 + 2) = lVar3;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__006783d4(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(piVar2 + 0x16) = lVar3;
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00656b14(lVar3,&DAT__text__00686de8); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar3 = FUN__text__006783d4(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(long *)(piVar2 + 0x18) = lVar3;
        if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__00656b14(lVar3,&LAB__text__00686dec); // [自动静态注释] 调用尚未恢复正式名称的函数
          nnosInitializeMutex(piVar2 + 0xe,1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nnosInitializeEvent(piVar2 + 4,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          piVar1 = piVar2 + 0x1a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          nnosInitializeEvent(piVar1,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nnosStartThread(*(undefined8 *)(piVar2 + 2)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nnosWaitEvent(piVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nnosFinalizeEvent(piVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return piVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        goto LAB__text__00686c04; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(piVar2 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00656c1c(*(long *)(piVar2 + 0x18),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00686c04: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(piVar2 + 0x16) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00656c1c(*(long *)(piVar2 + 0x16),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(piVar2 + 2) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00686b98(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *piVar2 = 0;
  memset(piVar2 + 4,0,0x58); // [自动静态注释] 内存复制、清零或移动
  return (int *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


