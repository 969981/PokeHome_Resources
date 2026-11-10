/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F4A50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4a50; name: FUN_.text__003f4a50
 */


undefined8 FUN__text__003f4a50(char *param_1,uint param_2,undefined8 param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    iVar3 = nn::fs::OpenFile((FileHandle *)(param_4 + 4),param_1,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
      nn::fs::GetFileSize(param_4,param_4[4]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__003f4b44: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[3] = (ulong)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_2 < 3) { // [自动静态注释] 条件判断/分支
    uVar1 = nn::fs::CreateFile(param_1,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = uVar1 & 0x3fffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 == 0x202) { // [自动静态注释] 条件判断/分支
      return 0x24; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((((uVar2 == 0x402) || (uVar2 == 0xe02)) || ((uVar1 & 0x1ff) != 2)) || // [自动静态注释] 条件判断/分支
       (0xf < (uVar1 >> 9 & 0x1ffe) - 0x1e)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar2 = nn::fs::OpenFile((FileHandle *)(param_4 + 4),param_1,6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar2 & 0x3fffff) == 0x202) { // [自动静态注释] 条件判断/分支
        return 0x42; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
        *param_4 = 0;
        goto LAB__text__003f4b44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


