/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059142C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069142c; name: FUN_.text__0069142c
 */


int FUN__text__0069142c(long param_1,undefined4 param_2,int param_3,undefined2 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_54 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short local_38 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__00690390(param_1,&local_34,param_4,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    local_38[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_54[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_5c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(param_1 + 0x1bd1) == '\0') { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = (**(code **)(param_1 + 0x1bd8))(0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = uVar3 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = (ulong)local_34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00691574(param_1,uVar4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    nn::fontll::ScalableFontEngine::SetScale // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar3 * 0xb8,param_3 << 0x10,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = nn::fontll::ScalableFontEngine::GetAdvance // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      ((short *)(*(long *)(param_1 + 0x10) + uVar3 * 0xb8),local_38,(int *)local_54, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       &iStack_58,(uint)&local_5c,(ushort)param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar1 == 0xc9) { // [自动静态注释] 条件判断/分支
      iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(param_1 + 0x1bd0) = 1;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
        iVar2 = (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar4 * 0x1c + 0x10) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) + uVar4 * 2) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                            (int)local_38[0])); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


