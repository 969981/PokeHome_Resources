/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00337ED8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00437ed8; name: FUN_.text__00437ed8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00437ed8(undefined8 param_1,long param_2,void *param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = (long *)FUN__text__00400f80(0x10,0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = plVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = 0;
  *plVar2 = _DAT_008a4858 + 0x10;
  *(undefined4 *)(plVar2 + 3) = 1;
  plVar2[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(plVar2 + 5) = (int)param_1;
  *(char *)((long)plVar2 + 0x2c) = (char)((ulong)param_1 >> 0x20);
  plVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 3) = 1;
  if ((param_3 != (void *)0x0) && (param_4 != 0)) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(plVar2 + 3) = 1;
    *(int *)(plVar2 + 2) = param_4 + 2;
    lVar3 = FUN__text__00400f80(0,(param_4 + 2) * 0x14); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(plVar2 + 2) = 0;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
      memcpy((void *)(lVar3 + 0xc),param_3,(ulong)(uint)(param_4 * 0xc)); // [自动静态注释] 内存复制、清零或移动
      *(undefined4 *)(plVar2[1] + 8) = 9;
      *(undefined4 *)plVar2[1] = 0xff7fffff;
      *(undefined4 *)(plVar2[1] + 4) = *(undefined4 *)(plVar2[1] + 0x10);
      *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 1) * 0xc + 8) = 9;
      *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 1) * 0xc) = 0x7f7fffff;
      *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 1) * 0xc + 4) =
           *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 2) * 0xc + 4);
      FUN__text__00432e60(plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar1 = FUN__text__004341c0(DAT_00ae9a70,param_1,plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
        return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00434700(DAT_00ae9a70,plVar2[5],plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2[1] != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *plVar4 = 0;
  plVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar2 + 3) = 1;
  FUN__text__00400fc0(0x10,plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


