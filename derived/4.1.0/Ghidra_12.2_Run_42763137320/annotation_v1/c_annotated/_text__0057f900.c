/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0047F900
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057f900; name: FUN_.text__0057f900
 */


void FUN__text__0057f900(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((int)param_1[1] != 0) && (uVar2 = (ulong)*(uint *)(param_1 + 2), *(uint *)(param_1 + 2) != 0) // [自动静态注释] 条件判断/分支
     ) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pvVar1 = *(void **)(*param_1 + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pvVar1 != (void *)0x0) { // [自动静态注释] 条件判断/分支
        memset(pvVar1,0,(ulong)(uint)((int)param_1[1] << 2)); // [自动静态注释] 内存复制、清零或移动
        uVar2 = (ulong)*(uint *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 < uVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (((int)param_1[4] != 0) && (uVar2 = (ulong)*(uint *)(param_1 + 5), *(uint *)(param_1 + 5) != 0) // [自动静态注释] 条件判断/分支
     ) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pvVar1 = *(void **)(param_1[3] + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pvVar1 != (void *)0x0) { // [自动静态注释] 条件判断/分支
        memset(pvVar1,0,(ulong)(uint)((int)param_1[4] << 2)); // [自动静态注释] 内存复制、清零或移动
        uVar2 = (ulong)*(uint *)(param_1 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 < uVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if ((void *)param_1[6] == (void *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  memset((void *)param_1[6],0,(ulong)*(uint *)(param_1 + 7)); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


