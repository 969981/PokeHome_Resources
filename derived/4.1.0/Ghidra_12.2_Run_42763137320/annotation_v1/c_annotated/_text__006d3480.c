/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D3480
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d3480; name: FUN_.text__006d3480
 */


void FUN__text__006d3480(undefined8 *param_1,undefined8 *param_2,undefined8 param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[2] = 0x100000001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006cdd78(param_1 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006cb570(param_1 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2[0x21] != 0) { // [自动静态注释] 条件判断/分支
    param_1[0x21] = param_2[0x21]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__006a0f04(); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x20] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x22] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    if (piVar1 == (int *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__006d3590: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      memcpy(param_1 + 4,param_2 + 4,0xd4); // [自动静态注释] 内存复制、清零或移动
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*piVar1 == 0x50434756) { // [自动静态注释] 条件判断/分支
      plVar3 = (long *)param_1[0x22]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x22] = plVar3 + 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        FUN__text__006ced00(plVar3,0,0,param_1 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      param_1[1] = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar3 + 0x10)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar3,param_3,param_4,*(undefined4 *)(param_1 + 2), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined4 *)((long)param_1 + 0x14));
      FUN__text__006d35c0(param_1,param_3,param_4,param_1[1],piVar1,*(undefined4 *)(param_1 + 2), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)((long)param_1 + 0x14));
      goto LAB__text__006d3590; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    piVar1 = (int *)nn::util::BinaryBlockHeader::GetNextBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


