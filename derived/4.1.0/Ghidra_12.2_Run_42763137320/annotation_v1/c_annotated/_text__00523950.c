/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00423950
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00523950; name: FUN_.text__00523950
 */


void FUN__text__00523950(long param_1,float *param_2,undefined8 param_3,char *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 != (char *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0x48) == 0) { // [自动静态注释] 条件判断/分支
      *(char **)(param_1 + 0x48) = param_4;
      if (*(char *)(param_1 + 0x50) != '\0') goto LAB__text__005239e4; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(char *)(param_1 + 0x50) != '\0') { // [自动静态注释] 条件判断/分支
        FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(param_1 + 0x50) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *(char **)(param_1 + 0x48) = param_4;
    } // [自动静态注释] 作用域/控制流边界
    sVar1 = strlen(param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((int)sVar1 == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x48) = 0;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      __n = (ulong)((int)sVar1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __dest = (void *)FUN__text__00400f80(9,__n); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(void **)(param_1 + 0x48) = __dest;
      if (__dest != (void *)0x0) { // [自动静态注释] 条件判断/分支
        memcpy(__dest,param_4,__n); // [自动静态注释] 内存复制、清零或移动
        *(undefined1 *)(param_1 + 0x50) = 1;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005239e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(float *)(param_1 + 0x98) = param_2[6];
  *(float *)(param_1 + 0x9c) = param_2[7];
  *(float *)(param_1 + 0xa4) = param_2[8];
  fVar4 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 0x30) = fVar2;
  *(float *)(param_1 + 0x38) = fVar4;
  fVar7 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x28) = fVar6;
  *(float *)(param_1 + 0x24) = fVar5;
  *(float *)(param_1 + 0x2c) = fVar7;
  *(float *)(param_1 + 0x18) = fVar4 * fVar6 - fVar3 * fVar7;
  *(float *)(param_1 + 0x1c) = fVar7 * fVar2 - fVar4 * fVar5;
  *(float *)(param_1 + 0x20) = fVar3 * fVar5 - fVar6 * fVar2;
  *(float *)(param_1 + 0xac) = param_2[9];
  FUN__text__00523780(param_1,*(undefined1 *)(param_2 + 10),param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xc);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


