/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00579144
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679144; name: FUN_.text__00679144
 */


void FUN__text__00679144(undefined8 *param_1,int *param_2,ulong *param_3,char *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_2 = 0;
  *param_1 = 0;
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = nn::fs::OpenFile((FileHandle *)&local_38,param_4,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = iVar1;
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    *param_3 = 0;
    iVar1 = nn::fs::GetFileSize(param_3,local_38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pvVar2 = (void *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_2 = iVar1;
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      uVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((long)uVar3 < 1) { // [自动静态注释] 条件判断/分支
        pvVar2 = (void *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pvVar2 = operator_new__(uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *param_1 = pvVar2;
        local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar1 = nn::fs::ReadFile(&local_40,local_38,0,pvVar2,uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *param_2 = iVar1;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    nn::fs::CloseFile(local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*param_2 != 0) && (*param_1 = 0, pvVar2 != (void *)0x0)) { // [自动静态注释] 条件判断/分支
      operator_delete__(pvVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


